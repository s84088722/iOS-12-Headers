/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:46 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, AKAppleIDAuthenticationContext, NSAttributedString, NSArray, NSDictionary;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _userInfo;

}

@property (setter=ak_setContext:,nonatomic,retain) AKAppleIDAuthenticationContext * ak_context; 
@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,copy) NSAttributedString * attributedContentText; 
@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSDictionary * userInfo; 
+(id)extensionItemWithAppleIDAuthenticationContext:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)ak_setContext:(id)arg1 ;
-(AKAppleIDAuthenticationContext *)ak_context;
-(NSAttributedString *)attributedContentText;
-(id)init;
-(void)dealloc;
-(NSArray *)attachments;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setAttributedContentText:(NSAttributedString *)arg1 ;
-(id)_matchingDictionaryRepresentation;
@end
