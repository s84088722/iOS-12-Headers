//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageSerializationWrapper : NSObject <NSSecureCoding>
{
    UIImage *_image;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithImage:(id)arg1;

@end

