/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldRoundedRectBackgroundViewNeue.h>
#import <UIKitCore/_UISearchAtomViewTappedStateProtocol.h>

@interface __UIAtomSearchBarFieldEditorBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue <_UISearchAtomViewTappedStateProtocol> {

	struct {
		BOOL shouldUpdateView;
	}  _flags;
	BOOL _backgroundContainer;
	BOOL _tapped;
	unsigned long long _searchBarStyle;
	long long _barStyle;

}

@property (assign,nonatomic) long long barStyle;                             //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) unsigned long long searchBarStyle;              //@synthesize searchBarStyle=_searchBarStyle - In the implementation block
@property (assign,nonatomic) BOOL backgroundContainer;                       //@synthesize backgroundContainer=_backgroundContainer - In the implementation block
@property (assign,getter=isTapped,nonatomic) BOOL tapped;                    //@synthesize tapped=_tapped - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)setBackgroundContainer:(BOOL)arg1 ;
-(void)updateView;
-(unsigned long long)searchBarStyle;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 updateView:(BOOL)arg3 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)_ultralightFillColorForOverlayFilter:(BOOL)arg1 active:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_fillColor:(BOOL)arg1 ;
-(BOOL)backgroundContainer;
-(void)setTapped:(BOOL)arg1 ;
-(BOOL)isTapped;
@end
