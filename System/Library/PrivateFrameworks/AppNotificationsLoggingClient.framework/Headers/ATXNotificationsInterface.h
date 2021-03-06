/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface ATXNotificationsInterface : NSObject <NSSecureCoding> {

	NSString* _sectionID;
	NSString* _topic;
	NSString* _title;
	NSString* _subtitle;
	NSString* _message;
	NSDate* _publicationDate;
	unsigned long long _numSuppActions;
	unsigned long long _feed;

}

@property (nonatomic,retain) NSString * sectionID;                           //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSString * topic;                               //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDate * publicationDate;                       //@synthesize publicationDate=_publicationDate - In the implementation block
@property (assign,nonatomic) unsigned long long numSuppActions;              //@synthesize numSuppActions=_numSuppActions - In the implementation block
@property (assign,nonatomic) unsigned long long feed;                        //@synthesize feed=_feed - In the implementation block
+(id)getBundleIdFromMetadata:(id)arg1 ;
+(id)createArchivedMetadata:(id)arg1 categoryId:(id)arg2 title:(id)arg3 subtitle:(id)arg4 message:(id)arg5 numSuppActions:(id)arg6 feed:(unsigned long long)arg7 ;
+(unsigned long long)getFeedFromMetadata:(id)arg1 ;
+(id)getTimezoneFromMetadata:(id)arg1 ;
+(id)getNumSuppActionsFromMetadata:(id)arg1 ;
+(id)getMessageFromMetadata:(id)arg1 ;
+(id)getSubtitleFromMetadata:(id)arg1 ;
+(id)getTitleFromMetadata:(id)arg1 ;
+(id)getTopicFromMetadata:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(NSDate *)publicationDate;
-(unsigned long long)feed;
-(unsigned long long)numSuppActions;
-(id)extractMetadata;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(void)setFeed:(unsigned long long)arg1 ;
-(void)setNumSuppActions:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
@end

