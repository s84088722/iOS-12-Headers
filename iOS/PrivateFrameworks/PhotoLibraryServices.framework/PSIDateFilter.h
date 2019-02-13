//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSString, PSIDate;

@interface PSIDateFilter : NSObject <NSCopying>
{
    PSIDate *_singleDate;
    PSIDate *_startDate;
    PSIDate *_endDate;
    NSString *_displayString;
}

@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(readonly) PSIDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) PSIDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) PSIDate *singleDate; // @synthesize singleDate=_singleDate;
- (void).cxx_destruct;
@property(readonly) long long int64RepresentationMask;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithSingleDate:(id)arg1;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (id)initWithEndDateComponents:(id)arg1;
- (id)initWithStartDateComponents:(id)arg1;
- (id)initWithSingleDateComponents:(id)arg1;

@end

