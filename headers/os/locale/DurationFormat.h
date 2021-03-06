/*
 * Copyright 2010-2011, Haiku, Inc.
 * Distributed under the terms of the MIT License.
 */
#ifndef _B_DURATION_FORMAT_H_
#define _B_DURATION_FORMAT_H_


#include <Format.h>
#include <Locale.h>
#include <String.h>
#include <TimeUnitFormat.h>

#include <unicode/gregocal.h>

class BTimeZone;


class BDurationFormat : public BFormat {
	typedef	BFormat				Inherited;

public:
								BDurationFormat(const BLanguage& language,
									const BFormattingConventions& conventions,
									const BString& separator = ", ");
								BDurationFormat(
									const BString& separator = ", ");
								BDurationFormat(const BDurationFormat& other);
	virtual						~BDurationFormat();

			void				SetSeparator(const BString& separator);
			status_t			SetTimeZone(const BTimeZone* timeZone);

			status_t			Format(BString& buffer,
									const bigtime_t startValue,
									const bigtime_t stopValue,
									time_unit_style style = B_TIME_UNIT_FULL
									) const;

private:
			BString				fSeparator;
			BTimeUnitFormat		fTimeUnitFormat;
			icu::GregorianCalendar*	fCalendar;
};


#endif
