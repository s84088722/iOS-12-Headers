//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFActivityItemProvider.h>

@class TabDocument;

@interface ActionPanelActivityItemProvider : _SFActivityItemProvider
{
    TabDocument *_tabDocument;
}

@property(readonly, nonatomic) TabDocument *tabDocument; // @synthesize tabDocument=_tabDocument;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3;
- (id)initWithTabDocument:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1 tabDocument:(id)arg2;

@end

