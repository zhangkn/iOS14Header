/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@interface TSPDocumentMetadata : TSPObject {

	BOOL _isInCollaborationModeForArchiving;

}
-(id)packageLocator;
-(long long)tsp_identifier;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned char)componentRequiredPackageIdentifier;
-(void)takeSnapshotWithCollaborationMode:(BOOL)arg1 ;
@end

