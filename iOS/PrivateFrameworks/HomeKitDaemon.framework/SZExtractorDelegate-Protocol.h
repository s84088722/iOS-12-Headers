//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSString;

@protocol SZExtractorDelegate <NSObject>

@optional
- (void)extractionEnteredPassThroughMode;
- (void)extractionCompleteAtArchivePath:(NSString *)arg1;
- (void)setExtractionProgress:(double)arg1;
@end

