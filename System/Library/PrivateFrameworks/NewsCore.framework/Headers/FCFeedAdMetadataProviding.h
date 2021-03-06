/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:37:16 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol FCFeedAdMetadataProviding <NSObject>
@property (nonatomic,readonly) NSString * iAdIdentifier; 
@property (nonatomic,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) NSArray * iAdKeywords; 
@property (nonatomic,readonly) long long iAdContentProvider; 
@property (nonatomic,readonly) NSString * iAdPrimaryAudience; 
@property (nonatomic,readonly) NSString * iAdFeedID; 
@property (nonatomic,readonly) NSString * iAdSectionID; 
@required
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(NSString *)iAdIdentifier;
-(long long)iAdContentProvider;
-(NSString *)iAdPrimaryAudience;
-(NSString *)iAdFeedID;
-(NSString *)iAdSectionID;

@end

