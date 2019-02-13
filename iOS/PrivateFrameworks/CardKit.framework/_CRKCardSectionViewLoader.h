//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardKit/CRKCardSectionViewSourcing-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol CRCard, _CRKCardSectionViewLoaderDelegate;

@interface _CRKCardSectionViewLoader : NSObject <CRKCardSectionViewSourcing>
{
    NSMutableDictionary *_cardSectionViewConfigurationsByCardSectionIdentifiersByProviderIdentifiers;
    NSMutableDictionary *_vetoingProviderIdentifiersByVetoedCardSectionIdentifiers;
    NSMutableSet *_identifiedCardSectionViewProviders;
    id <_CRKCardSectionViewLoaderDelegate> _delegate;
    id <CRCard> _loadedCard;
}

@property(retain, nonatomic) id <CRCard> loadedCard; // @synthesize loadedCard=_loadedCard;
@property(nonatomic) __weak id <_CRKCardSectionViewLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableSet *identifiedCardSectionViewProviders; // @synthesize identifiedCardSectionViewProviders=_identifiedCardSectionViewProviders;
- (void).cxx_destruct;
- (id)_viewConfigurationForCardSection:(id)arg1 providerIdentifier:(id)arg2;
- (id)_allViewConfigurations;
- (_Bool)cardSectionShouldBeDisplayed:(id)arg1;
- (id)viewConfigurationForCardSection:(id)arg1;
- (void)_loadIdentifiedCardSectionViewProvidersFromCard:(id)arg1 identifiedProviders:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

