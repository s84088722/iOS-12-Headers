//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPPackage.h>

__attribute__((visibility("hidden")))
@interface TSPDirectoryPackage : TSPPackage
{
}

+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;
+ (_Bool)isValidPackageAtURL:(id)arg1;
+ (id)componentFileURLForPackageURL:(id)arg1 packageLocator:(id)arg2;
+ (id)objectArchiveURLForPackageURL:(id)arg1;
- (void)prepareForDocumentReplacementWithSuccess:(_Bool)arg1 forSafeSave:(_Bool)arg2 originalURL:(id)arg3;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)hasDataAtRelativePath:(id)arg1;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)dataAtRelativePath:(id)arg1 allowDecryption:(_Bool)arg2 error:(id *)arg3;
- (id)packageEntryInfoAtRelativePath:(id)arg1 error:(id *)arg2;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id *)arg4;
- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 canLink:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(_Bool)arg2;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(_Bool)arg2;
- (long long)packageType;

@end

