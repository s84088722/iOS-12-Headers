//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface EKPreviewSection : NSObject
{
    NSArray *_events;
    NSDate *_date;
}

+ (id)sectionWithDate:(id)arg1;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)initWithDate:(id)arg1;

@end

