/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContainer.h>

@class CNContainer, NSString;

@interface CNMutableContainer : CNContainer

@property (nonatomic,copy) CNContainer * snapshot; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(id)freezeWithSelfAsSnapshot;
-(void)adoptValuesFromAndSetSnapshot:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)copy;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)freeze;
-(void)setSnapshot:(CNContainer *)arg1 ;
@end
