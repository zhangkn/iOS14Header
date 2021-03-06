/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSAApplicationPropertiesProvider.h>

@class NSArray;

@interface TPAppPropertiesProvider : TSAApplicationPropertiesProvider {

	NSArray* _iBADocumentTypes;

}

@property (nonatomic,readonly) NSArray * iBADocumentTypes;               //@synthesize iBADocumentTypes=_iBADocumentTypes - In the implementation block
@property (nonatomic,readonly) NSArray * wordDocumentTypes; 
@property (nonatomic,readonly) NSArray * textDocumentTypes; 
@property (nonatomic,readonly) NSArray * rtfDocumentTypes; 
-(unsigned long long)applicationType;
-(id)applicationDisplayName;
-(id)applicationName;
-(id)cloudKitContainerIdentifier;
-(id)documentTypeDisplayName;
-(id)templateTypeDisplayName;
-(id)nativeDocumentType;
-(id)templateDocumentType;
-(id)templateSFFDocumentType;
-(id)tangierEditingFormatDocumentType;
-(id)nativeSFFDocumentType;
-(id)importableDocumentTypes;
-(id)documentTypeDisplayNameForSharingInvitation;
-(id)cloudKitSyncContainerIdentifier;
-(id)bladerunnerContainerIdentifier;
-(NSArray *)wordDocumentTypes;
-(NSArray *)textDocumentTypes;
-(NSArray *)rtfDocumentTypes;
-(BOOL)supportsTabNavigationOfCanvasObjects;
-(id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)arg1 ;
-(NSArray *)iBADocumentTypes;
@end

