/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:56:43 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACBulletinCacheNode;

@interface ACBulletinCache : NSObject {

	unsigned long long _count;
	ACBulletinCacheNode* _oldestNode;
	ACBulletinCacheNode* _newestNode;

}
-(BOOL)_isFeedRelevant:(unsigned long long)arg1 ;
-(BOOL)_isBulletinFromRequiredDomain:(id)arg1 ;
-(id)_findNodeForBulletinID:(id)arg1 ;
-(BOOL)removeBulletinForID:(id)arg1 ;
-(void)_purgeOldestNodes;
-(void)_deleteNode:(id)arg1 ;
-(void)insertBulletin:(id)arg1 fromFeed:(unsigned long long)arg2 ;
-(id)allBulletins;
-(id)cachedBulletinForID:(id)arg1 ;
-(id)init;
@end
