//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHSettings.h>

@interface PHResourceDownloadSettings : PHSettings
{
    _Bool _simulateDownload;
    _Bool _simulateDownloadFailure;
}

+ (id)settingsControllerModule;
+ (id)sharedSettings;
@property(nonatomic) _Bool simulateDownloadFailure; // @synthesize simulateDownloadFailure=_simulateDownloadFailure;
@property(nonatomic) _Bool simulateDownload; // @synthesize simulateDownload=_simulateDownload;
- (void)setDefaultValues;
- (id)parentSettings;

@end

