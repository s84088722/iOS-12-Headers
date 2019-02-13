//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIItem.h>

@class NSArray, NSMutableDictionary, SKUIScreenshot;

@interface SKUISearchItem : SKUIItem
{
    SKUIScreenshot *_primaryScreenshot;
    NSArray *_screenshots;
    NSArray *_childItemIdentifiers;
    NSMutableDictionary *_loadedChildItems;
}

@property(readonly, nonatomic) NSArray *screenshots; // @synthesize screenshots=_screenshots;
@property(readonly, nonatomic) SKUIScreenshot *primaryScreenshot; // @synthesize primaryScreenshot=_primaryScreenshot;
- (void).cxx_destruct;
- (id)childItemIdentifiers;
- (id)childItemForIdentifier:(id)arg1;
- (id)loadedChildItems;
- (void)setChildItem:(id)arg1 forIdentifier:(id)arg2;
- (id)initWithLookupDictionary:(id)arg1;

@end

