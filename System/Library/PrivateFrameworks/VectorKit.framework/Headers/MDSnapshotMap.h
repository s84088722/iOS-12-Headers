/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:34 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDSnapshotMap <NSObject>
@property (assign,nonatomic) BOOL showsBuildings; 
@property (assign,nonatomic) BOOL showsVenues; 
@required
-(BOOL)showsVenues;
-(LabelSettingsRef)labelSettings;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1;
-(BOOL)isShowingNoDataPlaceholders;
-(void)setShowsVenues:(BOOL)arg1;

@end

