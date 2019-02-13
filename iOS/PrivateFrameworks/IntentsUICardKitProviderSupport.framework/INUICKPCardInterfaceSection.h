//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IntentsUI/INUIInterfaceSection.h>

#import <IntentsUICardKitProviderSupport/INUICKPInterfaceSectionModeling-Protocol.h>

@class NSSet, NSString;
@protocol CRCardSection;

@interface INUICKPCardInterfaceSection : INUIInterfaceSection <INUICKPInterfaceSectionModeling>
{
    NSSet *_cardSectionParameters;
    id <CRCardSection> _cardSection;
}

@property(retain, nonatomic) id <CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
@property(copy, nonatomic) NSSet *parameters; // @synthesize parameters=_cardSectionParameters;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isWildCardSection;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long interactiveBehavior;
@property(readonly) Class superclass;

@end

