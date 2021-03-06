/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSItem, NSMutableDictionary, NSString, NSArray, NSSet, SSItemMedia, SSDialog, SSNetworkConstraints;

@interface SSItemOffer : NSObject <NSCopying> {

	SSItem* _item;
	NSMutableDictionary* _offerDictionary;
	NSString* _offerIdentifier;
	NSArray* _supportedDevices;

}

@property (assign,setter=_setOfferItem:,getter=_offerItem,nonatomic) SSItem * _offerItem;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSSet * accountIdentifiers; 
@property (nonatomic,readonly) NSString * actionType; 
@property (nonatomic,readonly) long long estimatedDiskSpaceNeeded; 
@property (nonatomic,readonly) id requiredSoftwareCapabilities; 
@property (nonatomic,readonly) BOOL shouldShowPlusIcon; 
@property (nonatomic,readonly) NSString * offerIdentifier;                                             //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * priceDisplay; 
@property (nonatomic,readonly) NSString * actionDisplayName; 
@property (getter=isOneTapOffer,nonatomic,readonly) BOOL oneTapOffer; 
@property (getter=isPreorder,nonatomic,readonly) BOOL preorder; 
@property (nonatomic,readonly) SSItemMedia * offerMedia; 
@property (nonatomic,readonly) SSDialog * confirmationDialog; 
@property (nonatomic,readonly) SSDialog * successDialog; 
@property (nonatomic,readonly) NSArray * supportedDevices; 
@property (nonatomic,readonly) SSNetworkConstraints * networkConstraints; 
+(id)_preferredOfferIdentifiers;
-(NSString *)offerIdentifier;
-(SSNetworkConstraints *)networkConstraints;
-(void)_setOfferItem:(id)arg1 ;
-(SSDialog *)confirmationDialog;
-(SSDialog *)successDialog;
-(NSArray *)supportedDevices;
-(NSSet *)accountIdentifiers;
-(long long)estimatedDiskSpaceNeeded;
-(id)requiredSoftwareCapabilities;
-(SSItem *)_offerItem;
-(BOOL)isPreorder;
-(NSString *)actionType;
-(void)setPriceDisplay:(NSString *)arg1 ;
-(void)setActionDisplayName:(NSString *)arg1 ;
-(void)setOneTapOffer:(BOOL)arg1 ;
-(NSString *)priceDisplay;
-(id)documentCannotOpenDialog;
-(id)documentRequiredHandlers;
-(SSItemMedia *)offerMedia;
-(id)documentUTI;
-(id)allowedToneStyles;
-(id)playableMedia;
-(id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2 ;
-(BOOL)shouldShowPlusIcon;
-(NSString *)actionDisplayName;
-(BOOL)isOneTapOffer;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
@end

