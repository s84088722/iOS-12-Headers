//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol AXRemoteElementChildrenDelegate;

@interface AXRemoteElement : NSObject
{
    NSString *_uuid;
    int _remotePid;
    unsigned int _contextId;
    _Bool _onClientSide;
    NSMutableSet *_allChildren;
    _Bool _deniesDirectAppConnection;
    unsigned int _machPort;
    id <AXRemoteElementChildrenDelegate> _remoteChildrenDelegate;
    id _accessibilityContainer;
}

+ (_Bool)registerRemoteElement:(id)arg1;
+ (id)remoteElementsForContextId:(unsigned int)arg1;
+ (id)remoteElementsForBlock:(CDUnknownBlockType)arg1;
+ (id)remoteElementForBlock:(CDUnknownBlockType)arg1;
+ (void)initialize;
@property(nonatomic) _Bool deniesDirectAppConnection; // @synthesize deniesDirectAppConnection=_deniesDirectAppConnection;
@property(nonatomic) __weak id accessibilityContainer; // @synthesize accessibilityContainer=_accessibilityContainer;
@property(nonatomic) unsigned int machPort; // @synthesize machPort=_machPort;
@property(nonatomic) __weak id <AXRemoteElementChildrenDelegate> remoteChildrenDelegate; // @synthesize remoteChildrenDelegate=_remoteChildrenDelegate;
@property(nonatomic) _Bool onClientSide; // @synthesize onClientSide=_onClientSide;
@property(nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int remotePid; // @synthesize remotePid=_remotePid;
- (void).cxx_destruct;
- (id)description;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (struct CGRect)accessibilityFrame;
- (void)unregister;
- (id)accessibilityElements;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilityLastElement;
- (id)_accessibilityFirstElement;
- (id)_accessibilityResponderElement;
- (id)_accessibilityActiveKeyboard;
- (id)_remoteElementWithAttribute:(long long)arg1 limitToRemoteSubviews:(_Bool)arg2;
- (void)getLeafElementsFromRemoteSide:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long uuidHash;
- (void)dealloc;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityTextOperations;
- (void)platformCleanup;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;

@end

