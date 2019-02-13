//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUIItemViewElement, SKUILabelViewElement;

@interface SKUIMenuViewElement : SKUIViewElement
{
    BOOL _enabled;
    SKUILabelViewElement *_menuLabel;
}

@property(readonly, nonatomic) SKUILabelViewElement *menuLabel; // @synthesize menuLabel=_menuLabel;
- (void).cxx_destruct;
- (void)_enumerateItemElementsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEnabled;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIItemViewElement *titleItem;
@property(readonly, nonatomic) long long selectedItemIndex;
@property(readonly, nonatomic) NSArray *menuItemTitles;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

