//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class SPSearchQueryContext, SPUISearchHeader;

@protocol SPUISearchHeaderDelegate <NSObject>
- (void)cancelButtonPressed;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (void)queryContextDidChange:(SPSearchQueryContext *)arg1 fromSearchHeader:(SPUISearchHeader *)arg2 allowZKW:(_Bool)arg3;
@end

