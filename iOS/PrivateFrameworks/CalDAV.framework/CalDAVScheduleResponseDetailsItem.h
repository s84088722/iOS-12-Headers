//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, NSString;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem
{
    CoreDAVItemWithHrefChildItem *_recipientHREF;
    CoreDAVLeafItem *_requestStatus;
    ICSDocument *_calendarData;
    CoreDAVErrorItem *_topLevelErrorItem;
    NSString *_responseDescription;
}

@property(retain, nonatomic) NSString *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) CoreDAVErrorItem *topLevelErrorItem; // @synthesize topLevelErrorItem=_topLevelErrorItem;
@property(retain, nonatomic) ICSDocument *calendarData; // @synthesize calendarData=_calendarData;
@property(retain, nonatomic) CoreDAVLeafItem *requestStatus; // @synthesize requestStatus=_requestStatus;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *recipientHREF; // @synthesize recipientHREF=_recipientHREF;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *recipientString;
- (id)copyParseRules;
- (void)_setCalendarDataWithLeafItem:(id)arg1;

@end

