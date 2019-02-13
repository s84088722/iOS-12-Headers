//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject
{
    struct AugmentableInspectorController *_inspectorController;
    struct RetainPtr<RWIProtocolConfiguration> _configuration;
    struct unique_ptr<RWIAugmentableInspectorControllerClient, std::__1::default_delete<RWIAugmentableInspectorControllerClient>> _inspectorControllerClient;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)inspectorControllerDestroyed;
@property(readonly, nonatomic) _Bool connected;
@property(readonly, nonatomic) RWIProtocolConfiguration *configuration;
- (void)dealloc;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end

