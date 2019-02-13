//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, MPCPlayerResponseItem, MPCPlayerResponseSection;

@protocol MPCPlayerChangeItemCommand <MPCPlayerCommand>
- (MPCPlayerCommandRequest *)changeToItem:(MPCPlayerResponseItem *)arg1;
- (MPCPlayerCommandRequest *)changeToSection:(MPCPlayerResponseSection *)arg1;
- (MPCPlayerCommandRequest *)nextChapter;
- (MPCPlayerCommandRequest *)nextSection;
- (MPCPlayerCommandRequest *)nextItem;
- (MPCPlayerCommandRequest *)previousChapter;
- (MPCPlayerCommandRequest *)previousSection;
- (MPCPlayerCommandRequest *)previousItem;
@end

