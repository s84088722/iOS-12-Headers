/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UICellHighlightingSupport : NSObject {

	CFDictionaryRef _unhighlightedStates;
	id _cell;

}
-(void)dealloc;
-(void)cacheState:(unsigned long long)arg1 forView:(id)arg2 ;
-(void)applyState:(unsigned long long)arg1 toView:(id)arg2 ;
-(void)highlightView:(id)arg1 ;
-(id)initWithCell:(id)arg1 ;
@end
