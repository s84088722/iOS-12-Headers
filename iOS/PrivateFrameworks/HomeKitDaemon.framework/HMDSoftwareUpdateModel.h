//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, NSNumber;

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject
{
}

+ (id)properties;

// Remaining properties
@property(retain, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @dynamic documentationMetadata;
@property(retain, nonatomic) NSNumber *downloadSize; // @dynamic downloadSize;
@property(retain, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;

@end

