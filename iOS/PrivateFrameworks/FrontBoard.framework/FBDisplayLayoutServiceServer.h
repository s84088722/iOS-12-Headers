//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacility.h>

@class FBServiceClientAuthenticator, NSMutableDictionary;
@protocol FBDisplayLayoutServiceServerDelegate;

@interface FBDisplayLayoutServiceServer : FBSServiceFacility
{
    id <FBDisplayLayoutServiceServerDelegate> _delegate;
    NSMutableDictionary *_calloutQueuesByQOS;
    NSMutableDictionary *_defaultQOSClientsByDisplayType;
    NSMutableDictionary *_utilityQOSClientsByDisplayType;
    FBServiceClientAuthenticator *_connectionAuthenticator;
}

@property(nonatomic) __weak id <FBDisplayLayoutServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (_Bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;
- (id)_prerequisiteMilestones;
- (void)_sendDisplayLayout:(id)arg1 toClients:(id)arg2 withQualityOfService:(unsigned long long)arg3;
- (id)_utilityQOSClientsForDisplayType:(long long)arg1;
- (id)_defaultQOSClientsForDisplayType:(long long)arg1;
- (id)_calloutQueueForQOS:(unsigned long long)arg1;
- (void)publishDisplayLayout:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

