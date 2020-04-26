# android-jsc

[![](https://jitpack.io/v/iKECINCode/android-jsc.svg)](https://jitpack.io/#iKECINCode/android-jsc)

## Description

从 weex 开源项目移植 android-jsc 的下载脚本，简化在 Android 工程中添加依赖的操作

https://raw.githubusercontent.com/apache/incubator-weex/release/0.28/android/sdk/buildSrc/download_jsc.gradle

## Usage

### Gradle Dependency 

- Project level `build.gradle`

```gradle
allprojects {
    repositories {
        maven { url 'https://jitpack.io' }
    }
}
```

- App level `build.gradle`

```gradle
dependencies {
    implementation 'com.github.iKECINCode:android-jsc:xxxx'
}
```
