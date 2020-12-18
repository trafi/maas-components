package com.trafi.state

interface State<out T : State<T, E>, in E> {
    fun reduce(event: E): T
}
