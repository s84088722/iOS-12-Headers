//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>

@class NSString, SFActionItem, SFCard, SFImage, SFRichText, SFSearchResult;

@protocol SearchUIAuxilliaryFieldProtocol <NSObject>
@property(readonly) SFImage *thumbnail;
@property(readonly) SFSearchResult *identifyingResult;
@property(readonly) SFCard *card;
@property(readonly) int auxiliaryBottomTextColor;
@property(readonly) NSString *auxiliaryBottomText;
@property(readonly) NSString *auxiliaryMiddleText;
@property(readonly) NSString *auxiliaryTopText;
@property(readonly) SFActionItem *action;
@property(readonly) SFRichText *title;
@end
