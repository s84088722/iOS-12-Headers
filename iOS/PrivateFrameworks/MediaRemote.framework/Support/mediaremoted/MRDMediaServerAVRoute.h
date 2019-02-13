//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRDAVRoute.h"

@class MRDAVRouteExtendedInfo, NSDictionary;

@interface MRDMediaServerAVRoute : MRDAVRoute
{
    NSDictionary *_routeDescription;
    MRDAVRouteExtendedInfo *_extendedInfo;
}

- (void).cxx_destruct;
- (_Bool)matchesUniqueIdentifier:(id)arg1;
- (id)extendedInfo;
- (id)dictionary;
- (_Bool)canBeDefaultSystemRoute;
- (_Bool)canBeDefaultRoute;
- (_Bool)isSpeakerRoute;
- (_Bool)isPicked;
- (_Bool)isOutputRoute;
- (_Bool)isInputRoute;
- (id)modelName;
- (id)type;
- (id)name;
- (id)uniqueIdentifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;

@end
