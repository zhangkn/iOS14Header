/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSDate, PFUbiquityLocation, NSLock, NSMutableDictionary, NSObject;

@interface _PFUbiquityRecordsExporter : NSObject {

	NSString* _localPeerID;
	NSDate* _lastTransactionDate;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	NSString* _storeName;
	NSLock* _transactionLock;
	NSMutableDictionary* _pendingTransactionsToStoreNameAndTransactionNumber;
	BOOL _pendingTempLogMove;
	BOOL _allowTempLogStorage;
	BOOL _useLocalStorage;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _throwOptimisticLockingException;

}
-(void)dealloc;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(id)init;
-(id)description;
@end
