//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIHeaderViewElement;

@interface SKUIColumnViewElement : SKUIViewElement
{
    long long _columnSpan;
}

@property(readonly, nonatomic) long long columnSpan; // @synthesize columnSpan=_columnSpan;
- (long long)pageComponentType;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIHeaderViewElement *headerElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

