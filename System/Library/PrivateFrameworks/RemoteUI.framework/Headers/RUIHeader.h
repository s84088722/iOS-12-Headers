/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:37 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUIHeader <NSObject>
@optional
-(void)setIconImage:(id)arg1;
-(void)setImageSize:(CGSize)arg1;
-(void)setImageAlignment:(int)arg1;
-(id)headerLabel;
-(id)subHeaderLabel;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(id)detailHeaderLabel;
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
-(void)setDelegate:(id)arg1;

@required
-(id)initWithAttributes:(id)arg1;

@end

