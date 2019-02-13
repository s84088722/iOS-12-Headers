//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SSMetricsEventFieldProvider-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL, SKUICountdown, SKUIItem;

@interface SKUILink : NSObject <SSMetricsEventFieldProvider>
{
    SKUICountdown *_countdown;
    SKUIItem *_item;
    NSNumber *_itemIdentifier;
    NSString *_target;
    NSString *_title;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *targetString; // @synthesize targetString=_target;
@property(readonly, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_setItem:(id)arg1;
- (id)valueForMetricsField:(id)arg1;
@property(readonly, nonatomic) NSDictionary *linkDictionary;
@property(readonly, nonatomic, getter=isActionable) _Bool actionable;
- (id)initWithURL:(id)arg1 title:(id)arg2 targetString:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (id)initWithLinkDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

