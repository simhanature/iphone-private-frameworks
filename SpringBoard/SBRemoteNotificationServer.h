/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APSConnectionDelegate.h"
#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SBRemoteNotificationServer : NSObject <APSConnectionDelegate> {
	NSMutableDictionary* _bundleIdentifiersToClients;
	NSMutableDictionary* _environmentsToConnections;
	unsigned _lastPlayedAlertSound;
	NSString* _lastNotificationReceivedBundleIdentifier;
}
+(SBRemoteNotificationServer*)sharedInstance;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(NSString*)_clientsArchivePath;
-(void)saveClientState;
-(void)_purgeMissingClients;
-(void)run;
-(void)remoteNotificationAlertWasDismissedForApplication:(id)application launched:(BOOL)launched;
// in a protocol: -(void)connection:(id)connection didReceivePublicToken:(id)token;
-(void)noteApplicationFinishedLaunching:(id)launching;
// in a protocol: -(void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
-(id)_localizedStringFromKey:(id)key defaultValue:(id)value inBundle:(id)bundle arguments:(id)arguments;
-(void)_playAlertSound:(BOOL)sound soundName:(id)name inBundle:(id)bundle;
-(void)stopPlayingAlertSound;
-(id)lastNotificationReceivedBundleIdentifier;
-(id)allAppEnabledTypeValues;
-(id)allSettingsEnabledTypeValues;
-(void)calculateTopics;
-(void)registerApplication:(id)application forEnvironment:(id)environment withTypes:(int)types;
-(void)unregisterApplication:(id)application;
-(int)getEffectiveEnabledTypesForApplication:(id)application;
-(BOOL)isSystemwideEnabled;
-(void)setSystemwideEnabled:(BOOL)enabled;
-(BOOL)hasRegisteredBundleIdentifiers;
-(void)setSettingsTypes:(int)types forBundleIdentifier:(id)bundleIdentifier;
-(NSDictionary*)getMessageUserInfoForBundleIdentifier:(NSString*)bundleIdentifier;
@end

