//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXParsedDate-Protocol.h>

@class NSDate, NSString, NSTimeZone;

@interface SXParsedDate : NSObject <SXParsedDate>
{
    _Bool _containedTime;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) _Bool containedTime; // @synthesize containedTime=_containedTime;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithDate:(id)arg1 containedTime:(_Bool)arg2 timeZone:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
