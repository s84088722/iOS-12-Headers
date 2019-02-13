//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationDevice : IDSDestination
{
    IDSURI *_destinationURI;
    _Bool _isGuest;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isDeviceURI:(id)arg1;
@property(nonatomic) _Bool isGuest; // @synthesize isGuest=_isGuest;
@property(retain, nonatomic) IDSURI *destinationURI; // @synthesize destinationURI=_destinationURI;
- (void).cxx_destruct;
- (id)groupID;
- (id)destinationURIs;
- (_Bool)isDevice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1 isGuest:(_Bool)arg2;
- (id)initWithDeviceURI:(id)arg1;
- (id)initWithIDSDeviceURI:(id)arg1;
- (id)initWithRapportPublicIdentifierURI:(id)arg1;

@end

