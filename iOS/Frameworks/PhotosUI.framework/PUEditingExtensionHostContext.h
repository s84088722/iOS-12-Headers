//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <PhotosUI/PUEditingExtensionHost-Protocol.h>

@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost>
{
    CDUnknownBlockType _contentEditingOutputCommitHandler;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(copy) CDUnknownBlockType contentEditingOutputCommitHandler; // @synthesize contentEditingOutputCommitHandler=_contentEditingOutputCommitHandler;
- (void).cxx_destruct;
- (void)commitContentEditingOutput:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

