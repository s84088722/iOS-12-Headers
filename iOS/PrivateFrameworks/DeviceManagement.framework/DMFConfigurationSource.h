//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class DMFReportingRequirements, NSString;

@interface DMFConfigurationSource : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_displayName;
    NSString *_organizationIdentifier;
    NSString *_machServiceName;
    DMFReportingRequirements *_reportingRequirements;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) DMFReportingRequirements *reportingRequirements; // @synthesize reportingRequirements=_reportingRequirements;
@property(copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;

@end

