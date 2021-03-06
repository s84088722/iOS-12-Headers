/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol _IKJSImpression <IKJSImpression,JSExport>
@property (nonatomic,readonly) NSString * data; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) id parent; 
@property (nonatomic,readonly) long long index; 
@property (nonatomic,readonly) NSString * impressionQueueTag; 
@required
-(NSString *)impressionQueueTag;
-(NSArray *)timestamps;
-(long long)index;
-(NSString *)data;
-(id)parent;
-(NSArray *)children;

@end

