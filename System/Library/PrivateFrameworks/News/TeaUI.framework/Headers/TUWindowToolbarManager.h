/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUWindowToolbarButtonTrigger.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface TUWindowToolbarManager : NSObject <TUWindowToolbarButtonTrigger> {

	NSMutableDictionary* _windowToolbarItems;
	NSMutableArray* _registeredToolbarItemHandlerProviders;
	NSMutableDictionary* _registeredToolbarItemHandlers;

}

@property (nonatomic,readonly) NSMutableDictionary * windowToolbarItems;                            //@synthesize windowToolbarItems=_windowToolbarItems - In the implementation block
@property (nonatomic,readonly) NSMutableArray * registeredToolbarItemHandlerProviders;              //@synthesize registeredToolbarItemHandlerProviders=_registeredToolbarItemHandlerProviders - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registeredToolbarItemHandlers;                 //@synthesize registeredToolbarItemHandlers=_registeredToolbarItemHandlers - In the implementation block
@property (nonatomic,copy) NSString * centerItemIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
+(BOOL)toolbarAvailable;
-(void)updateToolbarItems;
-(NSMutableDictionary *)registeredToolbarItemHandlers;
-(void)registerToolbarItemHandlerProvider:(id)arg1 target:(id)arg2 ;
-(NSMutableArray *)registeredToolbarItemHandlerProviders;
-(void)executeBlock:(id)arg1 withSegmentIdentifier:(id)arg2 ;
-(void)setCenterItemIdentifier:(NSString *)arg1 ;
-(NSString *)centerItemIdentifier;
-(void)registerInWindow:(id)arg1 toolbarItems:(id)arg2 ;
-(void)enableInteraction;
-(void)registerToolbarItemHandlerProvider:(id)arg1 ;
-(void)removeToolbarBarItemHandlerProvider:(id)arg1 ;
-(void)removeToolbarBarItemHandlerProvidersForTarget:(id)arg1 ;
-(void)purgeTargetHandlers;
-(NSMutableDictionary *)windowToolbarItems;
-(id)init;
-(void)disableInteraction;
@end

