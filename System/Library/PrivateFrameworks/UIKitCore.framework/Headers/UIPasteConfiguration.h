/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSArray;

@interface UIPasteConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSMutableOrderedSet* _acceptableTypes;

}

@property (nonatomic,copy) NSArray * acceptableTypes; 
@property (nonatomic,copy) NSArray * acceptableTypeIdentifiers; 
+(BOOL)supportsSecureCoding;
+(id)_pasteConfigurationForAcceptingClasses:(id)arg1 ;
+(id)pasteConfigurationForAcceptingClasses:(id)arg1 ;
+(id)pasteConfigurationWithAcceptableTypes:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(id)initWithAcceptableTypes:(id)arg1 ;
-(id)initWithAcceptableTypeIdentifiers:(id)arg1 ;
-(void)setAcceptableTypeIdentifiers:(NSArray *)arg1 ;
-(NSArray *)acceptableTypeIdentifiers;
-(void)addAcceptableTypeIdentifiers:(id)arg1 ;
-(id)initWithTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(void)setAcceptableTypes:(NSArray *)arg1 ;
-(NSArray *)acceptableTypes;
@end
