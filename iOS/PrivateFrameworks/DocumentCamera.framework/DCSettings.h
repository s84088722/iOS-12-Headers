//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface DCSettings : NSObject
{
    NSUserDefaults *_userDefaults;
}

+ (id)sharedSettings;
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)setFinishAfterFirstScanBoxed:(id)arg1;
- (id)finishAfterFirstScanBoxed;
- (void)setEnableViewServiceBoxed:(id)arg1;
- (id)enableViewServiceBoxed;
@property(readonly, nonatomic) _Bool finishAfterFirstScan;
@property(readonly, nonatomic) _Bool enableViewService;
- (id)init;

@end

