//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionFactory-Protocol.h>

@class NSString;
@protocol SXDateParser;

@interface SXCalendarEventActionFactory : NSObject <SXActionFactory>
{
    id <SXDateParser> _dateParser;
}

@property(readonly, nonatomic) id <SXDateParser> dateParser; // @synthesize dateParser=_dateParser;
- (void).cxx_destruct;
- (id)actionForStartDate:(id)arg1 endDate:(id)arg2;
- (id)actionForURL:(id)arg1;
- (id)actionForAddition:(id)arg1;
- (id)initWithDateParser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

