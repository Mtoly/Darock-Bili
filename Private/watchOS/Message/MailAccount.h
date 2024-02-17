//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MailAccount_h
#define MailAccount_h
@import Foundation;

#include "MFAccount.h"
#include "EDIndexableAccount-Protocol.h"
#include "EDReceivingAccount-Protocol.h"
#include "EFLoggable-Protocol.h"
#include "EFScheduler-Protocol.h"
#include "MFError.h"
#include "MFLocalActionReplayHandler.h"
#include "MFMailMessageLibrary.h"
#include "MFMailboxUid.h"
#include "MFTaskManager-Protocol.h"
#include "MFWeakObjectCache.h"

@class ACAccount, ECAccount, MFLock, NSArray, NSDate, NSMutableDictionary, NSString, NSURL;

@interface MailAccount : MFAccount<EFLoggable, EDReceivingAccount, EDIndexableAccount> {
  /* instance variables */
  NSString *_path;
  NSString *_nonPersistentPath;
  struct { unsigned int x :16 cacheDirtyCount; unsigned int x :1 cacheHasBeenRead; unsigned int x :1 disableCacheWrite; unsigned int x :14 _UNUSED_; } _flags;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flagsLock;
  MFMailboxUid *_inboxMailboxUid;
  MFMailboxUid *_draftsMailboxUid;
  MFMailboxUid *_sentMessagesMailboxUid;
  MFMailboxUid *_trashMailboxUid;
  MFMailboxUid *_archiveMailboxUid;
  MFMailboxUid *_junkMailboxUid;
  MFLock *_cachedMailboxenLock;
  MFLock *_deletionLock;
  MFError *_lastConnectionError;
  MFMailMessageLibrary *_library;
  NSMutableDictionary *_currentChokedActions;
  NSString *_mailboxCachePath;
  MFWeakObjectCache *_messageStoresCache;
}

@property BOOL cacheHasBeenRead;
@property (retain, nonatomic) NSObject<EFScheduler> *mailboxCacheWriteScheduler;
@property (retain, nonatomic) MFLocalActionReplayHandler *replayHandler;
@property (readonly, nonatomic) NSObject<MFTaskManager> *taskManager;
@property (retain, nonatomic) NSDate *lastEmailAliasesSyncDate;
@property (retain, nonatomic) NSString *lastEmailAliasesSyncEntityTag;
@property (readonly) BOOL shouldArchiveByDefault;
@property (readonly) BOOL sourceIsManaged;
@property (readonly, nonatomic) NSString *defaultPath;
@property (readonly) BOOL moveSupported;
@property (readonly, nonatomic) MFMailboxUid *rootMailbox;
@property (readonly, nonatomic) MFMailboxUid *rootMailboxUid;
@property (readonly, copy, nonatomic) NSString *mailboxPathExtension;
@property (readonly, nonatomic) BOOL supportsRemoteAppend;
@property (readonly, nonatomic) BOOL supportsFastRemoteBodySearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSString *smtpIdentifier;
@property (readonly, nonatomic) BOOL isLocalAccount;
@property (readonly, nonatomic) NSURL *accountURL;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) ACAccount *systemAccount;
@property (readonly, copy, nonatomic) NSString *statisticsKind;
@property (readonly, nonatomic) BOOL primaryiCloudAccount;
@property (readonly, nonatomic) BOOL isActive;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSArray *emailAddressStrings;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic) BOOL managed;
@property (readonly, nonatomic) ECAccount *baseAccount;

/* class methods */
+ (id)log;
+ (void)initialize;
+ (BOOL)mailboxListingNotificationsAreEnabled;
+ (void)disableMailboxListingNotifications;
+ (void)enableMailboxListingNotifications:(BOOL)notifications;
+ (void)_addAccountToSortedPaths:(id)paths;
+ (void)_setupSortedPathsForAccounts:(id)accounts;
+ (id)existingAccountForUniqueID:(id)id;
+ (id)existingDAMailAccountForDAAccount:(id)daaccount;
+ (id)_loadAllAccountsWithError:(id *)error;
+ (id)_loadDataAccessAccountsWithError:(id *)error;
+ (void)reloadAccounts;
+ (id)mailAccounts;
+ (id)mailAccountsWithError:(id *)error;
+ (id)lastMailAccountsReloadDate;
+ (void)setMailAccounts:(id)accounts;
+ (void)setMailAccounts:(id)accounts saveIfChanged:(BOOL)changed;
+ (void)_setMailAccounts:(id)accounts saveIfChanged:(BOOL)changed alreadyLocked:(BOOL)locked;
+ (void)_removeAccountFromSortedPaths:(id)paths;
+ (id)activeAccounts;
+ (id)activeAccountEmailAddresses;
+ (id)activeNonLocalAccounts;
+ (id)activeAccountsWithError:(id *)error;
+ (id)purgeableAccounts;
+ (id)accountWithUniqueId:(id)id;
+ (void)notifyOfAccountsAdded:(id)added accountsRemoved:(id)removed changedAccounts:(id)accounts;
+ (id)existingAccountWithType:(id)type hostname:(id)hostname username:(id)username;
+ (void)resetMailboxTimers;
+ (id)_accountContainingEmailAddress:(id)address matchingAddress:(id *)address fullUserName:(id *)name includingInactive:(BOOL)inactive;
+ (id)accountContainingEmailAddress:(id)address includingInactive:(BOOL)inactive;
+ (id)accountContainingEmailAddress:(id)address;
+ (id)accountForHeaders:(id)headers message:(id)message includingInactive:(BOOL)inactive;
+ (id)accountThatMessageIsFrom:(id)from includingInactive:(BOOL)inactive;
+ (id)accountThatMessageIsFrom:(id)from;
+ (id)addressesThatReceivedMessage:(id)message;
+ (id)outboxMailboxUid;
+ (id)outboxMessageStore:(BOOL)store;
+ (id)allMailboxUids;
+ (id)allPurgeableMailboxUids;
+ (id)allMailboxUidsForAccounts:(id)accounts;
+ (id)allActivePrimaryMailboxUids;
+ (id)accountWithPath:(id)path;
+ (id)newAccountWithPath:(id)path;
+ (void)test_tearDown;
+ (id)newAccountWithDictionary:(id)dictionary;
+ (id)legacyPathForAccountIdentifier:(id)identifier withHostname:(id)hostname username:(id)username;
+ (id)legacyPathNameForAccountWithHostname:(id)hostname username:(id)username;
+ (id)defaultAccountDirectory;
+ (id)defaultMailAccountForDelivery;
+ (id)defaultMailAccountForDeliveryExcludingRestricted;
+ (id)_defaultMailAccountForDeliveryIncludingRestricted:(BOOL)restricted;
+ (id)defaultDeliveryAccount;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (BOOL)isPredefinedAccountType;
+ (void)saveStateForAllAccounts;
+ (id)csAccountTypeString;
+ (void)performOnAccounts:(id)accounts accountBlock:(id /* block */)block;
+ (void)_postMailboxListNotificationAfterBlock:(id /* block */)block;
+ (id)mailboxUidForFileSystemPath:(id)path create:(BOOL)create;
+ (id)accountWithURL:(id)url;
+ (id)infoForURL:(id)url;
+ (id)accountIDFromMailboxURLString:(id)urlstring urlScheme:(id)scheme;
+ (id)URLForInfo:(id)info;
+ (id)accountWithURLString:(id)urlstring;
+ (id)mailboxUidFromActiveAccountsForURL:(id)url;
+ (void)updateEmailAliasesForActiveAccounts;
+ (id)standardAccountClass:(Class)class valueForKey:(id)key;
+ (id)predefinedValueForKey:(id)key;
+ (BOOL)usernameIsEmailAddress;
+ (BOOL)getConfigurationFromServerForEmail:(id)email;
+ (id)_accountWithPath:(id)path;
+ (void)_setOutboxMailboxUid:(id)uid;
+ (BOOL)canMoveMessagesFromAccount:(id)account toAccount:(id)account;
+ (BOOL)canMoveMessagesFromAccount:(id)account toAccount:(id)account profileConnection:(id)connection;
+ (void)_removeLookAsideValuesNotInAccountList:(id)list;

/* instance methods */
- (BOOL)isEquivalentTo:(id)to hostname:(id)hostname username:(id)username;
- (BOOL)isUsernameEquivalentTo:(id)to;
- (void)resetMailboxTimer;
- (id)uniqueIdForPersistentConnection;
- (void)dealloc;
- (void)test_setTaskManager:(id)manager;
- (void)test_tearDown;
- (void)_invalidateCachedMailboxen;
- (void)persistentAccountDidChange:(id)change previousAccount:(id)account;
- (void)_setAccountProperties:(id)properties;
- (id)initWithPersistentAccount:(id)account;
- (id)initWithLibrary:(id)library persistentAccount:(id)account;
- (id)initWithLibrary:(id)library path:(id)path;
- (id)initWithPath:(id)path;
- (id)legacySQLExpressionToMatchAllMailboxes;
- (id)URLStringFromLegacyURLString:(id)urlstring;
- (id)path;
- (void)setPath:(id)path;
- (id)fullUserName;
- (void)setFullUserName:(id)name;
- (id)deliveryAccount;
- (BOOL)isPrimaryDeliveryAccountDisabled;
- (void)setPrimaryDeliveryAccountDisabled:(BOOL)disabled;
- (id)deliveryAccountAlternates;
- (void)setDeliveryAccount:(id)account;
- (void)setDeliveryAccountAlternates:(id)alternates;
- (BOOL)canUseDeliveryAccount:(id)account;
- (void)setCanUseCarrierDeliveryFallback:(BOOL)fallback;
- (BOOL)canUseCarrierDeliveryFallback;
- (id)firstEmailAddress;
- (id)defaultEmailAddress;
- (void)setDefaultEmailAddress:(id)address;
- (BOOL)checkAndSetDefaultEmailAddress:(id)address;
- (void)setEnabled:(BOOL)enabled forEmailAddress:(id)address;
- (void)pushUpdateForAliasData;
- (BOOL)checkAndSetEmailAddresses:(id)addresses;
- (id)emailAddressesDictionary;
- (id)receiveEmailAliasAddresses;
- (void)setReceiveEmailAliasAddresses:(id)addresses;
- (BOOL)checkAndSetReceiveEmailAliasAddresses:(id)addresses;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (id)emailAddressesAndAliasesList;
- (id)emailAddressesAndAliases;
- (id)copyReceivingEmailAddresses;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (void)_deleteHook;
- (void)_invalidateAndDeleteAccountData:(BOOL)data;
- (void)_asynchronouslyInvalidateAndDeleteAccountData:(BOOL)data;
- (void)invalidate;
- (void)invalidateAndDelete;
- (void)saveState;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (BOOL)canFetch;
- (BOOL)_shouldConfigureMailboxCache;
- (void)_synchronizeMailboxListWithFileSystem;
- (void)fetchMailboxList;
- (void)forceFetchMailboxList;
- (id)primaryMailboxUid;
- (id)allMailMailboxUid;
- (void)deleteDeliveryAccountIfNeeded;
- (BOOL)deliveryAccountInUseByOtherAccounts:(id)accounts;
- (BOOL)isSpecialMailbox:(id)mailbox;
- (id)mailboxUidOfType:(int)type createIfNeeded:(BOOL)needed;
- (id)mailboxForType:(long long)type;
- (BOOL)containsMailboxWithURL:(id)url;
- (id)specialMailboxNameForType:(int)type;
- (id)allMailboxUids;
- (id)allMailboxesFilteringNotes:(BOOL)notes;
- (id)mailboxesForSuggestionsLostMessageSearchPriorToTime:(double)time;
- (id)transferDisabledMailboxUids;
- (void)setMailboxUid:(id)uid forMailboxType:(int)type;
- (void)deleteMessagesFromMailboxUid:(id)uid olderThanNumberOfDays:(unsigned int)days;
- (void)_setEmptyFrequency:(int)frequency forKey:(id)key;
- (int)emptyFrequencyForMailboxType:(int)type;
- (void)setEmptyFrequency:(int)frequency forMailboxType:(int)type;
- (BOOL)_resetSpecialMailboxesCanPost:(BOOL)post;
- (void)resetSpecialMailboxes;
- (BOOL)resetSpecialMailboxesCanPostNotifications:(BOOL)notifications;
- (BOOL)canCreateNewMailboxes;
- (BOOL)newMailboxNameIsAcceptable:(id)acceptable reasonForFailure:(id *)failure;
- (BOOL)canMailboxBeRenamed:(id)renamed;
- (BOOL)canMailboxBeDeleted:(id)deleted;
- (BOOL)moveMailbox:(id)mailbox intoParent:(id)parent;
- (BOOL)renameMailbox:(id)mailbox newName:(id)name;
- (BOOL)renameMailbox:(id)mailbox newName:(id)name parent:(id)parent;
- (BOOL)_renameMailbox:(id)mailbox newName:(id)name parent:(id)parent;
- (BOOL)deleteMailbox:(id)mailbox;
- (BOOL)deleteMailbox:(id)mailbox reflectToServer:(BOOL)server;
- (void)_resetAllMailboxURLs:(BOOL)urls;
- (void)resetMailboxURLs;
- (BOOL)isHostnameEquivalentTo:(id)to;
- (BOOL)isAccountClassEquivalentTo:(id)to;
- (void)setPortNumber:(unsigned int)number;
- (void)setValueInAccountProperties:(id)properties forKey:(id)key;
- (void)setConnectionError:(id)error;
- (id)connectionError;
- (id)storeForMailboxUid:(id)uid;
- (Class)storeClass;
- (Class)storeClassForMailbox:(id)mailbox;
- (id)mailboxUidForRelativePath:(id)path create:(BOOL)create;
- (id)_childOfMailbox:(id)mailbox withComponentName:(id)name;
- (id)mailboxUidForRelativePath:(id)path create:(BOOL)create withOption:(int)option;
- (id)URLString;
- (id)URL;
- (id)mailboxUidForInfo:(id)info;
- (id)mailboxUidForURL:(id)url;
- (BOOL)ownsMailboxUidWithURL:(id)url;
- (void)emptyTrash;
- (void)startListeningForNotifications;
- (void)stopListeningForNotifications;
- (void)transferNotificationSessionToAccount:(id)account;
- (void)invalidateEmailAliases;
- (void)updateEmailAliasesIfNeeded;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)setLibrary:(id)library;
- (id)library;
- (void)setupLibrary;
- (BOOL)supportsAppend;
- (BOOL)supportsSyncingReadState;
- (BOOL)supportsMailboxEditing;
- (BOOL)supportsPurge;
- (id)displayUsername;
- (BOOL)mustArchiveSentMessages;
- (BOOL)canArchiveSentMessages;
- (BOOL)supportsMessageFlagging;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (BOOL)deleteInPlaceForAllMailboxes;
- (BOOL)deleteInPlaceForMailbox:(id)mailbox;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)uid;
- (id)persistentNameForMailbox:(id)mailbox;
- (BOOL)shouldFetchRemoteLinksWithDateReceived:(id)received;
- (id)loggingIdentifier;
- (void)newActionsAdded;
- (void)addNewAction:(id)action;
- (id)replayAction:(id)action;
- (id)meetingStorePersistentID;
- (BOOL)reconstituteOrphanedMeetingInMessage:(id)message;
- (id)unactionableInvitationICSRepresentationInMessage:(id)message summary:(id *)summary;
- (BOOL)hasEnoughInformationForEasySetup;
- (BOOL)canReceiveNewMailNotifications;
- (BOOL)_registerPushNotificationPrefix:(id)prefix forMailboxNames:(id)names;
- (BOOL)willPerformActionForChokePoint:(id)point coalescePoint:(id)point result:(id *)result;
- (void)didFinishActionForChokePoint:(id)point coalescePoint:(id)point withResult:(id)result;
- (void)deliveryAccountWillBeRemoved:(id)removed;
- (id)pushedMailboxUids;
- (BOOL)supportsUserPushedMailboxes;
- (void)changePushedMailboxUidsAdded:(id)added deleted:(id)deleted;
- (BOOL)_setPath:(id)path;
- (BOOL)isActiveWithPersistentAccount:(id)account;
- (void)setActive:(BOOL)active;
- (void)_didBecomeActive:(BOOL)active;
- (int)_emptyFrequencyForKey:(id)key defaultValue:(id)value;
- (BOOL)shouldFetchAgainWithError:(id)error foregroundRequest:(BOOL)request;
- (id)_pathComponentForUidName:(id)name;
- (id)_uidNameForPathComponent:(id)component;
- (id)_copyMailboxUidWithParent:(id)parent name:(id)name attributes:(unsigned long long)attributes existingMailboxUid:(id)uid dictionary:(id)dictionary;
- (void)_synchronouslyLoadListingForParent:(id)parent;
- (BOOL)_loadMailboxListingIntoCache:(id)cache attributes:(unsigned int)attributes children:(id)children parent:(id)parent;
- (void)_mailboxesWereRemovedFromTree:(id)tree withFileSystemPaths:(id)paths;
- (id)mailboxCachePath;
- (void)setMailboxCachePath:(id)path;
- (void)resetMailboxCache;
- (void)_loadEntriesFromFileSystemPath:(id)path parent:(id)parent;
- (void)_writeMailboxCacheWithPrejudice:(BOOL)prejudice;
- (void)_writeMailboxCacheWithPrejudice:(BOOL)prejudice completionHandler:(id /* block */)handler;
- (void)_incrementCacheDirtyCount;
- (BOOL)_setChildren:(id)children forMailboxUid:(id)uid;
- (BOOL)_deleteMailbox:(id)mailbox reflectToServer:(BOOL)server;
- (id)powerAssertionIdentifierWithPrefix:(id)prefix;
- (id)_defaultSpecialMailboxNameForType:(int)type;
- (id)_cachedSpecialMailboxOfType:(int)type;
- (BOOL)_assignSpecialMailboxToAppropriateIvar:(id)ivar forType:(int)type;
- (void)_setSpecialMailboxName:(id)name forType:(int)type;
- (void)_setSpecialMailbox:(id)mailbox forType:(int)type;
- (id)_specialMailboxUidWithType:(int)type create:(BOOL)create;
- (BOOL)_canEmptyMessagesFromMailboxUid:(id)uid;
- (BOOL)_shouldLogDeleteActivity;
- (id)_infoForMatchingURL:(id)url;
- (id)_URLScheme;
- (id)_URLForInfo:(id)info;
- (id)_mailboxPathPrefix;
- (BOOL)_readCustomInfoFromMailboxCache:(id)cache;
- (BOOL)_writeCustomInfoToMailboxCache:(id)cache;
- (id)URLForMessage:(id)message;
- (id)uniqueServerIdForMessage:(id)message;
- (BOOL)_cleanInboxDuplication:(id)duplication;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)needed;
- (id)_copyMailboxWithParent:(id)parent name:(id)name attributes:(unsigned long long)attributes dictionary:(id)dictionary;
- (id)newMailboxWithParent:(id)parent name:(id)name;
- (id)_newMailboxWithParent:(id)parent name:(id)name attributes:(unsigned int)attributes dictionary:(id)dictionary withCreationOption:(int)option;
- (id)_localMailboxNameForType:(int)type usingDisplayName:(id)name;
- (BOOL)isMailboxLocalForType:(int)type;
- (id)allLocalMailboxUids;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)iconString;
- (id)saveSentFolder;
- (id)valueInAccountLookAsidePropertiesForKey:(id)key;
- (void)setValueInAccountLookAsideProperties:(id)properties forKey:(id)key;
- (void)_setValueInAccountLookAsideProperties:(id)properties forKey:(id)key subKey:(id)key;
- (id)signingIdentityPersistentReferenceForAddress:(id)address;
- (void)setSigningIdentityPersistentReference:(id)reference forAddress:(id)address;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)address;
- (void)setEncryptionIdentityPersistentReference:(id)reference forAddress:(id)address;
- (BOOL)perMessageEncryptionEnabledForAddress:(id)address;
- (int)secureCompositionSigningPolicyForAddress:(id)address;
- (int)secureCompositionEncryptionPolicyForAddress:(id)address;
- (id)copyDataForRemoteEncryptionCertificatesForAddresses:(id)addresses errors:(id *)errors;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)address error:(id *)error;
- (BOOL)restrictedFromTransferingMessagesToOtherAccounts;
- (BOOL)restrictedFromSendingExternally;
- (BOOL)restrictedFromSyncingRecents;
- (id)fetchLimits;
- (id)customSignature;
- (void)setCustomSignature:(id)signature;
- (BOOL)supportsArchiving;
- (BOOL)supportsThreadOperations;
- (BOOL)preventArchiveForMailbox:(id)mailbox;
- (BOOL)canArchiveForMailbox:(id)mailbox;
- (int)archiveDestinationForMailbox:(id)mailbox;
- (id)unsupportedHandoffTypes;
- (BOOL)supportsHandoffType:(id)type;
- (BOOL)supportsMailDrop;
- (void)_registerStateCaptureHandler;
- (id)stateCaptureTitle;
- (id)lastKnownCapabilities;
- (id)debugAccountState;
@end

#endif /* MailAccount_h */