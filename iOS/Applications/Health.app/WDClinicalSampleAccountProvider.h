//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WDClinicalSampleAccountProviderGateway;

@interface WDClinicalSampleAccountProvider : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSDictionary *_properties;
    WDClinicalSampleAccountProviderGateway *_gateway;
}

@property(retain, nonatomic) WDClinicalSampleAccountProviderGateway *gateway; // @synthesize gateway=_gateway;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

