//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKMediaObjectManager : NSObject
{
    NSMutableDictionary *_transfers;
    NSArray *_classes;
    NSDictionary *_UTITypes;
    NSDictionary *_dynTypes;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *dynTypes; // @synthesize dynTypes=_dynTypes;
@property(copy, nonatomic) NSDictionary *UTITypes; // @synthesize UTITypes=_UTITypes;
@property(copy, nonatomic) NSArray *classes; // @synthesize classes=_classes;
@property(retain, nonatomic) NSMutableDictionary *transfers; // @synthesize transfers=_transfers;
- (void).cxx_destruct;
- (void)transferRemoved:(id)arg1;
- (Class)transferClass;
- (id)fileManager;
- (id)transferWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3;
- (id)transferWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(_Bool)arg4;
- (id)transferWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (id)mediaObjectWithSticker:(id)arg1 stickerUserInfo:(id)arg2;
- (id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 attributionInfo:(id)arg4 hideAttachment:(_Bool)arg5;
- (id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (id)mediaObjectWithData:(id)arg1 UTIType:(id)arg2 filename:(id)arg3 transcoderUserInfo:(id)arg4;
- (id)mediaObjectWithTransferGUID:(id)arg1 imMessage:(id)arg2 parentChatIsSpam:(_Bool)arg3;
- (id)mediaObjectWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (Class)classForFilename:(id)arg1;
- (Class)classForFilename:(id)arg1 fileURL:(id)arg2;
- (Class)classForUTIType:(id)arg1;
- (id)allUTITypes;
- (id)UTITypeForFilename:(id)arg1;
- (id)UTITypeForExtension:(id)arg1;
- (id)init;
- (void)dealloc;

@end

