//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDictionary, NSString, NSUUID;

@protocol NWNetworkAgent
+ (id)agentFromData:(NSData *)arg1;
+ (NSString *)agentType;
+ (NSString *)agentDomain;
@property(nonatomic, getter=isVoluntary) _Bool voluntary;
@property(nonatomic, getter=isUserActivated) _Bool userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated;
@property(nonatomic, getter=isActive) _Bool active;
@property(copy, nonatomic) NSUUID *agentUUID;
@property(copy, nonatomic) NSString *agentDescription;
- (NSData *)copyAgentData;

@optional
@property(nonatomic) _Bool requiresAssert;
@property(nonatomic) _Bool supportsBrowseRequests;
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider;
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
- (void)closeNexusWithOptions:(NSDictionary *)arg1;
- (_Bool)requestNexusWithOptions:(NSDictionary *)arg1;
- (void)unassertAgentWithOptions:(NSDictionary *)arg1;
- (_Bool)assertAgentWithOptions:(NSDictionary *)arg1;
- (_Bool)startAgentWithOptions:(NSDictionary *)arg1;
@end

