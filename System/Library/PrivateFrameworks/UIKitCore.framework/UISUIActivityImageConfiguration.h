//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIImage, _UIActivityBundleImageConfiguration;

__attribute__((visibility("hidden")))
@interface UISUIActivityImageConfiguration : NSObject <NSSecureCoding>
{
    _UIActivityBundleImageConfiguration *_bundleImageConfiguration;
    UIImage *_image;
    NSString *_imageCreationBundleIdentifier;
    _Bool _isSettingsVariant;
}

+ (_Bool)supportsSecureCoding;
+ (id)configurationWithDefaultImage;
+ (id)configurationWithImageSpecifiedByBundleIdentifier:(id)arg1;
+ (id)configurationWithImageSpecifiedBySpecificImage:(id)arg1;
+ (id)configurationWithImageSpecifiedBySpecificBundleImage:(id)arg1;
@property(nonatomic) _Bool isSettingsVariant; // @synthesize isSettingsVariant=_isSettingsVariant;
- (void).cxx_destruct;
- (id)loadedActivityImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 bundleImageConfiguration:(id)arg2 imageCreationBundleIdentifier:(id)arg3 isSettingsVariant:(_Bool)arg4;

@end

